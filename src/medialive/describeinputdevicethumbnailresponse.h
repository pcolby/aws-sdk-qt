// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINPUTDEVICETHUMBNAILRESPONSE_H
#define QTAWS_DESCRIBEINPUTDEVICETHUMBNAILRESPONSE_H

#include "medialiveresponse.h"
#include "describeinputdevicethumbnailrequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeInputDeviceThumbnailResponsePrivate;

class QTAWSMEDIALIVE_EXPORT DescribeInputDeviceThumbnailResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    DescribeInputDeviceThumbnailResponse(const DescribeInputDeviceThumbnailRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInputDeviceThumbnailRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInputDeviceThumbnailResponse)
    Q_DISABLE_COPY(DescribeInputDeviceThumbnailResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
