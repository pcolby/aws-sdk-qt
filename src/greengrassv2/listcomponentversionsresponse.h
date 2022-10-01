// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTVERSIONSRESPONSE_H
#define QTAWS_LISTCOMPONENTVERSIONSRESPONSE_H

#include "greengrassv2response.h"
#include "listcomponentversionsrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class ListComponentVersionsResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT ListComponentVersionsResponse : public GreengrassV2Response {
    Q_OBJECT

public:
    ListComponentVersionsResponse(const ListComponentVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListComponentVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListComponentVersionsResponse)
    Q_DISABLE_COPY(ListComponentVersionsResponse)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
