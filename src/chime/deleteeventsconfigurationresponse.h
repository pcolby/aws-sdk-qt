// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEEVENTSCONFIGURATIONRESPONSE_H

#include "chimeresponse.h"
#include "deleteeventsconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class DeleteEventsConfigurationResponsePrivate;

class QTAWSCHIME_EXPORT DeleteEventsConfigurationResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeleteEventsConfigurationResponse(const DeleteEventsConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEventsConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventsConfigurationResponse)
    Q_DISABLE_COPY(DeleteEventsConfigurationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
