// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINPUTRESPONSE_H
#define QTAWS_UPDATEINPUTRESPONSE_H

#include "medialiveresponse.h"
#include "updateinputrequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateInputResponsePrivate;

class QTAWSMEDIALIVE_EXPORT UpdateInputResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    UpdateInputResponse(const UpdateInputRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateInputRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInputResponse)
    Q_DISABLE_COPY(UpdateInputResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
