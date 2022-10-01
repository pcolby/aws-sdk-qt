// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTRESPONSE_H
#define QTAWS_UPDATECONTACTRESPONSE_H

#include "sesv2response.h"
#include "updatecontactrequest.h"

namespace QtAws {
namespace SESv2 {

class UpdateContactResponsePrivate;

class QTAWSSESV2_EXPORT UpdateContactResponse : public SESv2Response {
    Q_OBJECT

public:
    UpdateContactResponse(const UpdateContactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateContactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContactResponse)
    Q_DISABLE_COPY(UpdateContactResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
