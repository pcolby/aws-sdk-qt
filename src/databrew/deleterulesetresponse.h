// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULESETRESPONSE_H
#define QTAWS_DELETERULESETRESPONSE_H

#include "databrewresponse.h"
#include "deleterulesetrequest.h"

namespace QtAws {
namespace DataBrew {

class DeleteRulesetResponsePrivate;

class QTAWSDATABREW_EXPORT DeleteRulesetResponse : public DataBrewResponse {
    Q_OBJECT

public:
    DeleteRulesetResponse(const DeleteRulesetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRulesetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRulesetResponse)
    Q_DISABLE_COPY(DeleteRulesetResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
