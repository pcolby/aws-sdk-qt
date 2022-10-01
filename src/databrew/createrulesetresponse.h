// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULESETRESPONSE_H
#define QTAWS_CREATERULESETRESPONSE_H

#include "databrewresponse.h"
#include "createrulesetrequest.h"

namespace QtAws {
namespace DataBrew {

class CreateRulesetResponsePrivate;

class QTAWSDATABREW_EXPORT CreateRulesetResponse : public DataBrewResponse {
    Q_OBJECT

public:
    CreateRulesetResponse(const CreateRulesetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRulesetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRulesetResponse)
    Q_DISABLE_COPY(CreateRulesetResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
