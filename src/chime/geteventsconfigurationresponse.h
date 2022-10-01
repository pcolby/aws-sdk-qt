// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTSCONFIGURATIONRESPONSE_H
#define QTAWS_GETEVENTSCONFIGURATIONRESPONSE_H

#include "chimeresponse.h"
#include "geteventsconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class GetEventsConfigurationResponsePrivate;

class QTAWSCHIME_EXPORT GetEventsConfigurationResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetEventsConfigurationResponse(const GetEventsConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEventsConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventsConfigurationResponse)
    Q_DISABLE_COPY(GetEventsConfigurationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
