// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMFADEVICETAGSRESPONSE_H
#define QTAWS_LISTMFADEVICETAGSRESPONSE_H

#include "iamresponse.h"
#include "listmfadevicetagsrequest.h"

namespace QtAws {
namespace Iam {

class ListMFADeviceTagsResponsePrivate;

class QTAWSIAM_EXPORT ListMFADeviceTagsResponse : public IamResponse {
    Q_OBJECT

public:
    ListMFADeviceTagsResponse(const ListMFADeviceTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMFADeviceTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMFADeviceTagsResponse)
    Q_DISABLE_COPY(ListMFADeviceTagsResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
