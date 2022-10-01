// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMFADEVICESRESPONSE_H
#define QTAWS_LISTMFADEVICESRESPONSE_H

#include "iamresponse.h"
#include "listmfadevicesrequest.h"

namespace QtAws {
namespace Iam {

class ListMFADevicesResponsePrivate;

class QTAWSIAM_EXPORT ListMFADevicesResponse : public IamResponse {
    Q_OBJECT

public:
    ListMFADevicesResponse(const ListMFADevicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMFADevicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMFADevicesResponse)
    Q_DISABLE_COPY(ListMFADevicesResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
