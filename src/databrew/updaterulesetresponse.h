// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULESETRESPONSE_H
#define QTAWS_UPDATERULESETRESPONSE_H

#include "databrewresponse.h"
#include "updaterulesetrequest.h"

namespace QtAws {
namespace DataBrew {

class UpdateRulesetResponsePrivate;

class QTAWSDATABREW_EXPORT UpdateRulesetResponse : public DataBrewResponse {
    Q_OBJECT

public:
    UpdateRulesetResponse(const UpdateRulesetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRulesetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRulesetResponse)
    Q_DISABLE_COPY(UpdateRulesetResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
