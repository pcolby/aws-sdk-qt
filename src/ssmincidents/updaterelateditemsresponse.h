// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERELATEDITEMSRESPONSE_H
#define QTAWS_UPDATERELATEDITEMSRESPONSE_H

#include "ssmincidentsresponse.h"
#include "updaterelateditemsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateRelatedItemsResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT UpdateRelatedItemsResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    UpdateRelatedItemsResponse(const UpdateRelatedItemsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRelatedItemsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRelatedItemsResponse)
    Q_DISABLE_COPY(UpdateRelatedItemsResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
