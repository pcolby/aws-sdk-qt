// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTCUSTOMIZATIONRESPONSE_H
#define QTAWS_UPDATEACCOUNTCUSTOMIZATIONRESPONSE_H

#include "quicksightresponse.h"
#include "updateaccountcustomizationrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateAccountCustomizationResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateAccountCustomizationResponse : public QuickSightResponse {
    Q_OBJECT

public:
    UpdateAccountCustomizationResponse(const UpdateAccountCustomizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAccountCustomizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAccountCustomizationResponse)
    Q_DISABLE_COPY(UpdateAccountCustomizationResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
