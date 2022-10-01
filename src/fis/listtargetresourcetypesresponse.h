// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETRESOURCETYPESRESPONSE_H
#define QTAWS_LISTTARGETRESOURCETYPESRESPONSE_H

#include "fisresponse.h"
#include "listtargetresourcetypesrequest.h"

namespace QtAws {
namespace Fis {

class ListTargetResourceTypesResponsePrivate;

class QTAWSFIS_EXPORT ListTargetResourceTypesResponse : public FisResponse {
    Q_OBJECT

public:
    ListTargetResourceTypesResponse(const ListTargetResourceTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTargetResourceTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTargetResourceTypesResponse)
    Q_DISABLE_COPY(ListTargetResourceTypesResponse)

};

} // namespace Fis
} // namespace QtAws

#endif
