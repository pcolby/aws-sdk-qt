// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FSXRESPONSE_H
#define QTAWS_FSXRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsfsxglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace FSx {

class FSxResponsePrivate;

class QTAWSFSX_EXPORT FSxResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    FSxResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    FSxResponse(FSxResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FSxResponse)
    Q_DISABLE_COPY(FSxResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
