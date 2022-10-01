// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMENTITYTYPESRESPONSE_H
#define QTAWS_LISTCUSTOMENTITYTYPESRESPONSE_H

#include "glueresponse.h"
#include "listcustomentitytypesrequest.h"

namespace QtAws {
namespace Glue {

class ListCustomEntityTypesResponsePrivate;

class QTAWSGLUE_EXPORT ListCustomEntityTypesResponse : public GlueResponse {
    Q_OBJECT

public:
    ListCustomEntityTypesResponse(const ListCustomEntityTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCustomEntityTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCustomEntityTypesResponse)
    Q_DISABLE_COPY(ListCustomEntityTypesResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
