// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINPUTDEVICESRESPONSE_H
#define QTAWS_LISTINPUTDEVICESRESPONSE_H

#include "medialiveresponse.h"
#include "listinputdevicesrequest.h"

namespace QtAws {
namespace MediaLive {

class ListInputDevicesResponsePrivate;

class QTAWSMEDIALIVE_EXPORT ListInputDevicesResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    ListInputDevicesResponse(const ListInputDevicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInputDevicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInputDevicesResponse)
    Q_DISABLE_COPY(ListInputDevicesResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
