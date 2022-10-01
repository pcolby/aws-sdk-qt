// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTCUSTOMIZATIONRESPONSE_H
#define QTAWS_DELETEACCOUNTCUSTOMIZATIONRESPONSE_H

#include "quicksightresponse.h"
#include "deleteaccountcustomizationrequest.h"

namespace QtAws {
namespace QuickSight {

class DeleteAccountCustomizationResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DeleteAccountCustomizationResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DeleteAccountCustomizationResponse(const DeleteAccountCustomizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAccountCustomizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccountCustomizationResponse)
    Q_DISABLE_COPY(DeleteAccountCustomizationResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
