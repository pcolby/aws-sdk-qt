// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONFROMENVIRONMENTRESPONSE_H
#define QTAWS_DELETEAPPLICATIONFROMENVIRONMENTRESPONSE_H

#include "m2response.h"
#include "deleteapplicationfromenvironmentrequest.h"

namespace QtAws {
namespace M2 {

class DeleteApplicationFromEnvironmentResponsePrivate;

class QTAWSM2_EXPORT DeleteApplicationFromEnvironmentResponse : public M2Response {
    Q_OBJECT

public:
    DeleteApplicationFromEnvironmentResponse(const DeleteApplicationFromEnvironmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteApplicationFromEnvironmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApplicationFromEnvironmentResponse)
    Q_DISABLE_COPY(DeleteApplicationFromEnvironmentResponse)

};

} // namespace M2
} // namespace QtAws

#endif
