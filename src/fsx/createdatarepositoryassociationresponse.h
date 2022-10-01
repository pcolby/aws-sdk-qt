// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAREPOSITORYASSOCIATIONRESPONSE_H
#define QTAWS_CREATEDATAREPOSITORYASSOCIATIONRESPONSE_H

#include "fsxresponse.h"
#include "createdatarepositoryassociationrequest.h"

namespace QtAws {
namespace FSx {

class CreateDataRepositoryAssociationResponsePrivate;

class QTAWSFSX_EXPORT CreateDataRepositoryAssociationResponse : public FSxResponse {
    Q_OBJECT

public:
    CreateDataRepositoryAssociationResponse(const CreateDataRepositoryAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDataRepositoryAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataRepositoryAssociationResponse)
    Q_DISABLE_COPY(CreateDataRepositoryAssociationResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
