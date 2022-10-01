// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDDIRECTORYRESPONSE_H
#define QTAWS_CLOUDDIRECTORYRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsclouddirectoryglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CloudDirectory {

class CloudDirectoryResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT CloudDirectoryResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CloudDirectoryResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CloudDirectoryResponse(CloudDirectoryResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudDirectoryResponse)
    Q_DISABLE_COPY(CloudDirectoryResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
