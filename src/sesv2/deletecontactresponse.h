// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTRESPONSE_H
#define QTAWS_DELETECONTACTRESPONSE_H

#include "sesv2response.h"
#include "deletecontactrequest.h"

namespace QtAws {
namespace SESv2 {

class DeleteContactResponsePrivate;

class QTAWSSESV2_EXPORT DeleteContactResponse : public SESv2Response {
    Q_OBJECT

public:
    DeleteContactResponse(const DeleteContactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteContactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContactResponse)
    Q_DISABLE_COPY(DeleteContactResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
