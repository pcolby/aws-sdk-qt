// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSERVICESOFTWAREUPDATERESPONSE_H
#define QTAWS_CANCELSERVICESOFTWAREUPDATERESPONSE_H

#include "opensearchresponse.h"
#include "cancelservicesoftwareupdaterequest.h"

namespace QtAws {
namespace OpenSearch {

class CancelServiceSoftwareUpdateResponsePrivate;

class QTAWSOPENSEARCH_EXPORT CancelServiceSoftwareUpdateResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    CancelServiceSoftwareUpdateResponse(const CancelServiceSoftwareUpdateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelServiceSoftwareUpdateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelServiceSoftwareUpdateResponse)
    Q_DISABLE_COPY(CancelServiceSoftwareUpdateResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
