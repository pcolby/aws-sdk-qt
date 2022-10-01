// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DIRECTORYSERVICERESPONSE_H
#define QTAWS_DIRECTORYSERVICERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsdirectoryserviceglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace DirectoryService {

class DirectoryServiceResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DirectoryServiceResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    DirectoryServiceResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    DirectoryServiceResponse(DirectoryServiceResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DirectoryServiceResponse)
    Q_DISABLE_COPY(DirectoryServiceResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
