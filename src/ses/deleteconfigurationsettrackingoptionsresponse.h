// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONSETTRACKINGOPTIONSRESPONSE_H
#define QTAWS_DELETECONFIGURATIONSETTRACKINGOPTIONSRESPONSE_H

#include "sesresponse.h"
#include "deleteconfigurationsettrackingoptionsrequest.h"

namespace QtAws {
namespace Ses {

class DeleteConfigurationSetTrackingOptionsResponsePrivate;

class QTAWSSES_EXPORT DeleteConfigurationSetTrackingOptionsResponse : public SesResponse {
    Q_OBJECT

public:
    DeleteConfigurationSetTrackingOptionsResponse(const DeleteConfigurationSetTrackingOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteConfigurationSetTrackingOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConfigurationSetTrackingOptionsResponse)
    Q_DISABLE_COPY(DeleteConfigurationSetTrackingOptionsResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
