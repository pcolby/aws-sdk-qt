// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULESETSRESPONSE_H
#define QTAWS_LISTRULESETSRESPONSE_H

#include "databrewresponse.h"
#include "listrulesetsrequest.h"

namespace QtAws {
namespace DataBrew {

class ListRulesetsResponsePrivate;

class QTAWSDATABREW_EXPORT ListRulesetsResponse : public DataBrewResponse {
    Q_OBJECT

public:
    ListRulesetsResponse(const ListRulesetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRulesetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRulesetsResponse)
    Q_DISABLE_COPY(ListRulesetsResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
