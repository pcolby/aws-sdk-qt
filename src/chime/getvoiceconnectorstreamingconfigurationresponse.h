/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETVOICECONNECTORSTREAMINGCONFIGURATIONRESPONSE_H
#define QTAWS_GETVOICECONNECTORSTREAMINGCONFIGURATIONRESPONSE_H

#include "chimeresponse.h"
#include "getvoiceconnectorstreamingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorStreamingConfigurationResponsePrivate;

class QTAWSCHIME_EXPORT GetVoiceConnectorStreamingConfigurationResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetVoiceConnectorStreamingConfigurationResponse(const GetVoiceConnectorStreamingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVoiceConnectorStreamingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceConnectorStreamingConfigurationResponse)
    Q_DISABLE_COPY(GetVoiceConnectorStreamingConfigurationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
