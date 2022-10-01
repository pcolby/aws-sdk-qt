// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELRESPONSE_H
#define QTAWS_DELETECHANNELRESPONSE_H

#include "mediapackageresponse.h"
#include "deletechannelrequest.h"

namespace QtAws {
namespace MediaPackage {

class DeleteChannelResponsePrivate;

class QTAWSMEDIAPACKAGE_EXPORT DeleteChannelResponse : public MediaPackageResponse {
    Q_OBJECT

public:
    DeleteChannelResponse(const DeleteChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteChannelResponse)
    Q_DISABLE_COPY(DeleteChannelResponse)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
