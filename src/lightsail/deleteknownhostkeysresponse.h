// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKNOWNHOSTKEYSRESPONSE_H
#define QTAWS_DELETEKNOWNHOSTKEYSRESPONSE_H

#include "lightsailresponse.h"
#include "deleteknownhostkeysrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteKnownHostKeysResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteKnownHostKeysResponse : public LightsailResponse {
    Q_OBJECT

public:
    DeleteKnownHostKeysResponse(const DeleteKnownHostKeysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteKnownHostKeysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteKnownHostKeysResponse)
    Q_DISABLE_COPY(DeleteKnownHostKeysResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
