// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVERLESSAPPLICATIONREPOSITORYRESPONSE_H
#define QTAWS_SERVERLESSAPPLICATIONREPOSITORYRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsserverlessapplicationrepositoryglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class ServerlessApplicationRepositoryResponsePrivate;

class QTAWSSERVERLESSAPPLICATIONREPOSITORY_EXPORT ServerlessApplicationRepositoryResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ServerlessApplicationRepositoryResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ServerlessApplicationRepositoryResponse(ServerlessApplicationRepositoryResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ServerlessApplicationRepositoryResponse)
    Q_DISABLE_COPY(ServerlessApplicationRepositoryResponse)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
