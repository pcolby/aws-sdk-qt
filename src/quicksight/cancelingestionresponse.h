// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELINGESTIONRESPONSE_H
#define QTAWS_CANCELINGESTIONRESPONSE_H

#include "quicksightresponse.h"
#include "cancelingestionrequest.h"

namespace QtAws {
namespace QuickSight {

class CancelIngestionResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT CancelIngestionResponse : public QuickSightResponse {
    Q_OBJECT

public:
    CancelIngestionResponse(const CancelIngestionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelIngestionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelIngestionResponse)
    Q_DISABLE_COPY(CancelIngestionResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
