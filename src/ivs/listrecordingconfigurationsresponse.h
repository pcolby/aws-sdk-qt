// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECORDINGCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTRECORDINGCONFIGURATIONSRESPONSE_H

#include "ivsresponse.h"
#include "listrecordingconfigurationsrequest.h"

namespace QtAws {
namespace Ivs {

class ListRecordingConfigurationsResponsePrivate;

class QTAWSIVS_EXPORT ListRecordingConfigurationsResponse : public IvsResponse {
    Q_OBJECT

public:
    ListRecordingConfigurationsResponse(const ListRecordingConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRecordingConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecordingConfigurationsResponse)
    Q_DISABLE_COPY(ListRecordingConfigurationsResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
