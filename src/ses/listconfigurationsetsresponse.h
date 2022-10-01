// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONSETSRESPONSE_H
#define QTAWS_LISTCONFIGURATIONSETSRESPONSE_H

#include "sesresponse.h"
#include "listconfigurationsetsrequest.h"

namespace QtAws {
namespace Ses {

class ListConfigurationSetsResponsePrivate;

class QTAWSSES_EXPORT ListConfigurationSetsResponse : public SesResponse {
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

} // namespace Ses
} // namespace QtAws

#endif
