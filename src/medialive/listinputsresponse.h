// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINPUTSRESPONSE_H
#define QTAWS_LISTINPUTSRESPONSE_H

#include "medialiveresponse.h"
#include "listinputsrequest.h"

namespace QtAws {
namespace MediaLive {

class ListInputsResponsePrivate;

class QTAWSMEDIALIVE_EXPORT ListInputsResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    ListInputsResponse(const ListInputsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInputsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInputsResponse)
    Q_DISABLE_COPY(ListInputsResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
