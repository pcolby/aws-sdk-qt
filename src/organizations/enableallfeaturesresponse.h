// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEALLFEATURESRESPONSE_H
#define QTAWS_ENABLEALLFEATURESRESPONSE_H

#include "organizationsresponse.h"
#include "enableallfeaturesrequest.h"

namespace QtAws {
namespace Organizations {

class EnableAllFeaturesResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT EnableAllFeaturesResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    EnableAllFeaturesResponse(const EnableAllFeaturesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableAllFeaturesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableAllFeaturesResponse)
    Q_DISABLE_COPY(EnableAllFeaturesResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
