// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATIONVERSIONSRESPONSE_H
#define QTAWS_LISTASSOCIATIONVERSIONSRESPONSE_H

#include "ssmresponse.h"
#include "listassociationversionsrequest.h"

namespace QtAws {
namespace Ssm {

class ListAssociationVersionsResponsePrivate;

class QTAWSSSM_EXPORT ListAssociationVersionsResponse : public SsmResponse {
    Q_OBJECT

public:
    ListAssociationVersionsResponse(const ListAssociationVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssociationVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssociationVersionsResponse)
    Q_DISABLE_COPY(ListAssociationVersionsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
