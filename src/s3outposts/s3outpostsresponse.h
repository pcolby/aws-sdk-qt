// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_S3OUTPOSTSRESPONSE_H
#define QTAWS_S3OUTPOSTSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawss3outpostsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace S3Outposts {

class S3OutpostsResponsePrivate;

class QTAWSS3OUTPOSTS_EXPORT S3OutpostsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    S3OutpostsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    S3OutpostsResponse(S3OutpostsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(S3OutpostsResponse)
    Q_DISABLE_COPY(S3OutpostsResponse)

};

} // namespace S3Outposts
} // namespace QtAws

#endif
