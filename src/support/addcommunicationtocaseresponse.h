// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDCOMMUNICATIONTOCASERESPONSE_H
#define QTAWS_ADDCOMMUNICATIONTOCASERESPONSE_H

#include "supportresponse.h"
#include "addcommunicationtocaserequest.h"

namespace QtAws {
namespace Support {

class AddCommunicationToCaseResponsePrivate;

class QTAWSSUPPORT_EXPORT AddCommunicationToCaseResponse : public SupportResponse {
    Q_OBJECT

public:
    AddCommunicationToCaseResponse(const AddCommunicationToCaseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddCommunicationToCaseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddCommunicationToCaseResponse)
    Q_DISABLE_COPY(AddCommunicationToCaseResponse)

};

} // namespace Support
} // namespace QtAws

#endif
