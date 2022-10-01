// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTOCERTIFICATERESPONSE_H
#define QTAWS_ADDTAGSTOCERTIFICATERESPONSE_H

#include "acmresponse.h"
#include "addtagstocertificaterequest.h"

namespace QtAws {
namespace Acm {

class AddTagsToCertificateResponsePrivate;

class QTAWSACM_EXPORT AddTagsToCertificateResponse : public AcmResponse {
    Q_OBJECT

public:
    AddTagsToCertificateResponse(const AddTagsToCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddTagsToCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddTagsToCertificateResponse)
    Q_DISABLE_COPY(AddTagsToCertificateResponse)

};

} // namespace Acm
} // namespace QtAws

#endif
