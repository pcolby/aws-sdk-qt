// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONSETSRESPONSE_H
#define QTAWS_LISTCONFIGURATIONSETSRESPONSE_H

#include "sesv2response.h"
#include "listconfigurationsetsrequest.h"

namespace QtAws {
namespace SESv2 {

class ListConfigurationSetsResponsePrivate;

class QTAWSSESV2_EXPORT ListConfigurationSetsResponse : public SESv2Response {
    Q_OBJECT

public:
    ListConfigurationSetsResponse(const ListConfigurationSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListConfigurationSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConfigurationSetsResponse)
    Q_DISABLE_COPY(ListConfigurationSetsResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
