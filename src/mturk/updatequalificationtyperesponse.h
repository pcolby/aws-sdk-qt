// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUALIFICATIONTYPERESPONSE_H
#define QTAWS_UPDATEQUALIFICATIONTYPERESPONSE_H

#include "mturkresponse.h"
#include "updatequalificationtyperequest.h"

namespace QtAws {
namespace MTurk {

class UpdateQualificationTypeResponsePrivate;

class QTAWSMTURK_EXPORT UpdateQualificationTypeResponse : public MTurkResponse {
    Q_OBJECT

public:
    UpdateQualificationTypeResponse(const UpdateQualificationTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateQualificationTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateQualificationTypeResponse)
    Q_DISABLE_COPY(UpdateQualificationTypeResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
