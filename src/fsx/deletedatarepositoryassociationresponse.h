// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATAREPOSITORYASSOCIATIONRESPONSE_H
#define QTAWS_DELETEDATAREPOSITORYASSOCIATIONRESPONSE_H

#include "fsxresponse.h"
#include "deletedatarepositoryassociationrequest.h"

namespace QtAws {
namespace FSx {

class DeleteDataRepositoryAssociationResponsePrivate;

class QTAWSFSX_EXPORT DeleteDataRepositoryAssociationResponse : public FSxResponse {
    Q_OBJECT

public:
    DeleteDataRepositoryAssociationResponse(const DeleteDataRepositoryAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDataRepositoryAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDataRepositoryAssociationResponse)
    Q_DISABLE_COPY(DeleteDataRepositoryAssociationResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
