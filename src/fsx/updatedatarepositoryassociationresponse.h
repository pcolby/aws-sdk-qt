// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATAREPOSITORYASSOCIATIONRESPONSE_H
#define QTAWS_UPDATEDATAREPOSITORYASSOCIATIONRESPONSE_H

#include "fsxresponse.h"
#include "updatedatarepositoryassociationrequest.h"

namespace QtAws {
namespace FSx {

class UpdateDataRepositoryAssociationResponsePrivate;

class QTAWSFSX_EXPORT UpdateDataRepositoryAssociationResponse : public FSxResponse {
    Q_OBJECT

public:
    UpdateDataRepositoryAssociationResponse(const UpdateDataRepositoryAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDataRepositoryAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDataRepositoryAssociationResponse)
    Q_DISABLE_COPY(UpdateDataRepositoryAssociationResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
