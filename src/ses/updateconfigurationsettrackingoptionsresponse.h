// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONSETTRACKINGOPTIONSRESPONSE_H
#define QTAWS_UPDATECONFIGURATIONSETTRACKINGOPTIONSRESPONSE_H

#include "sesresponse.h"
#include "updateconfigurationsettrackingoptionsrequest.h"

namespace QtAws {
namespace Ses {

class UpdateConfigurationSetTrackingOptionsResponsePrivate;

class QTAWSSES_EXPORT UpdateConfigurationSetTrackingOptionsResponse : public SesResponse {
    Q_OBJECT

public:
    UpdateConfigurationSetTrackingOptionsResponse(const UpdateConfigurationSetTrackingOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateConfigurationSetTrackingOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConfigurationSetTrackingOptionsResponse)
    Q_DISABLE_COPY(UpdateConfigurationSetTrackingOptionsResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
