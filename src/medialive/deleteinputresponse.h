// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINPUTRESPONSE_H
#define QTAWS_DELETEINPUTRESPONSE_H

#include "medialiveresponse.h"
#include "deleteinputrequest.h"

namespace QtAws {
namespace MediaLive {

class DeleteInputResponsePrivate;

class QTAWSMEDIALIVE_EXPORT DeleteInputResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    DeleteInputResponse(const DeleteInputRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteInputRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInputResponse)
    Q_DISABLE_COPY(DeleteInputResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
