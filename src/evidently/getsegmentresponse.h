// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTRESPONSE_H
#define QTAWS_GETSEGMENTRESPONSE_H

#include "evidentlyresponse.h"
#include "getsegmentrequest.h"

namespace QtAws {
namespace Evidently {

class GetSegmentResponsePrivate;

class QTAWSEVIDENTLY_EXPORT GetSegmentResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    GetSegmentResponse(const GetSegmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSegmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSegmentResponse)
    Q_DISABLE_COPY(GetSegmentResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
