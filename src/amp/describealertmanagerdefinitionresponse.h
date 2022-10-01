// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALERTMANAGERDEFINITIONRESPONSE_H
#define QTAWS_DESCRIBEALERTMANAGERDEFINITIONRESPONSE_H

#include "ampresponse.h"
#include "describealertmanagerdefinitionrequest.h"

namespace QtAws {
namespace Amp {

class DescribeAlertManagerDefinitionResponsePrivate;

class QTAWSAMP_EXPORT DescribeAlertManagerDefinitionResponse : public AmpResponse {
    Q_OBJECT

public:
    DescribeAlertManagerDefinitionResponse(const DescribeAlertManagerDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAlertManagerDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAlertManagerDefinitionResponse)
    Q_DISABLE_COPY(DescribeAlertManagerDefinitionResponse)

};

} // namespace Amp
} // namespace QtAws

#endif
