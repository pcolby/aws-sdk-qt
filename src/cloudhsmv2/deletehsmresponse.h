// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHSMRESPONSE_H
#define QTAWS_DELETEHSMRESPONSE_H

#include "cloudhsmv2response.h"
#include "deletehsmrequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class DeleteHsmResponsePrivate;

class QTAWSCLOUDHSMV2_EXPORT DeleteHsmResponse : public CloudHsmV2Response {
    Q_OBJECT

public:
    DeleteHsmResponse(const DeleteHsmRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteHsmRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHsmResponse)
    Q_DISABLE_COPY(DeleteHsmResponse)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
