// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEALLBACKENDSRESPONSE_H
#define QTAWS_REMOVEALLBACKENDSRESPONSE_H

#include "amplifybackendresponse.h"
#include "removeallbackendsrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class RemoveAllBackendsResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT RemoveAllBackendsResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    RemoveAllBackendsResponse(const RemoveAllBackendsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveAllBackendsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveAllBackendsResponse)
    Q_DISABLE_COPY(RemoveAllBackendsResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
