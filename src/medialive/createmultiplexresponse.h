// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMULTIPLEXRESPONSE_H
#define QTAWS_CREATEMULTIPLEXRESPONSE_H

#include "medialiveresponse.h"
#include "createmultiplexrequest.h"

namespace QtAws {
namespace MediaLive {

class CreateMultiplexResponsePrivate;

class QTAWSMEDIALIVE_EXPORT CreateMultiplexResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    CreateMultiplexResponse(const CreateMultiplexRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMultiplexRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMultiplexResponse)
    Q_DISABLE_COPY(CreateMultiplexResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
