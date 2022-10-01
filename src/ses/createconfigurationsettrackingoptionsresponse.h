// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONSETTRACKINGOPTIONSRESPONSE_H
#define QTAWS_CREATECONFIGURATIONSETTRACKINGOPTIONSRESPONSE_H

#include "sesresponse.h"
#include "createconfigurationsettrackingoptionsrequest.h"

namespace QtAws {
namespace Ses {

class CreateConfigurationSetTrackingOptionsResponsePrivate;

class QTAWSSES_EXPORT CreateConfigurationSetTrackingOptionsResponse : public SesResponse {
    Q_OBJECT

public:
    CreateConfigurationSetTrackingOptionsResponse(const CreateConfigurationSetTrackingOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateConfigurationSetTrackingOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConfigurationSetTrackingOptionsResponse)
    Q_DISABLE_COPY(CreateConfigurationSetTrackingOptionsResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
