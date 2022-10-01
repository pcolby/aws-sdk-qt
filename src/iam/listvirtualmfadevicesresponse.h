// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALMFADEVICESRESPONSE_H
#define QTAWS_LISTVIRTUALMFADEVICESRESPONSE_H

#include "iamresponse.h"
#include "listvirtualmfadevicesrequest.h"

namespace QtAws {
namespace Iam {

class ListVirtualMFADevicesResponsePrivate;

class QTAWSIAM_EXPORT ListVirtualMFADevicesResponse : public IamResponse {
    Q_OBJECT

public:
    ListVirtualMFADevicesResponse(const ListVirtualMFADevicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVirtualMFADevicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVirtualMFADevicesResponse)
    Q_DISABLE_COPY(ListVirtualMFADevicesResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
