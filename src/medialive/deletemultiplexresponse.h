// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMULTIPLEXRESPONSE_H
#define QTAWS_DELETEMULTIPLEXRESPONSE_H

#include "medialiveresponse.h"
#include "deletemultiplexrequest.h"

namespace QtAws {
namespace MediaLive {

class DeleteMultiplexResponsePrivate;

class QTAWSMEDIALIVE_EXPORT DeleteMultiplexResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    DeleteMultiplexResponse(const DeleteMultiplexRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMultiplexRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMultiplexResponse)
    Q_DISABLE_COPY(DeleteMultiplexResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
