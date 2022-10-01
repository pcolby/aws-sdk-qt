// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSERVICESOFTWAREUPDATERESPONSE_H
#define QTAWS_STARTSERVICESOFTWAREUPDATERESPONSE_H

#include "opensearchresponse.h"
#include "startservicesoftwareupdaterequest.h"

namespace QtAws {
namespace OpenSearch {

class StartServiceSoftwareUpdateResponsePrivate;

class QTAWSOPENSEARCH_EXPORT StartServiceSoftwareUpdateResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    StartServiceSoftwareUpdateResponse(const StartServiceSoftwareUpdateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartServiceSoftwareUpdateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartServiceSoftwareUpdateResponse)
    Q_DISABLE_COPY(StartServiceSoftwareUpdateResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
