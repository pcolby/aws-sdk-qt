// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTSCONFIGURATIONRESPONSE_H
#define QTAWS_PUTEVENTSCONFIGURATIONRESPONSE_H

#include "chimeresponse.h"
#include "puteventsconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class PutEventsConfigurationResponsePrivate;

class QTAWSCHIME_EXPORT PutEventsConfigurationResponse : public ChimeResponse {
    Q_OBJECT

public:
    PutEventsConfigurationResponse(const PutEventsConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutEventsConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEventsConfigurationResponse)
    Q_DISABLE_COPY(PutEventsConfigurationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
