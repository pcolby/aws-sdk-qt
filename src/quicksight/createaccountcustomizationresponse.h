// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCOUNTCUSTOMIZATIONRESPONSE_H
#define QTAWS_CREATEACCOUNTCUSTOMIZATIONRESPONSE_H

#include "quicksightresponse.h"
#include "createaccountcustomizationrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateAccountCustomizationResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT CreateAccountCustomizationResponse : public QuickSightResponse {
    Q_OBJECT

public:
    CreateAccountCustomizationResponse(const CreateAccountCustomizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAccountCustomizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAccountCustomizationResponse)
    Q_DISABLE_COPY(CreateAccountCustomizationResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
