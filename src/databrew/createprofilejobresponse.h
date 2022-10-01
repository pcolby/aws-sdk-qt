/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CREATEPROFILEJOBRESPONSE_H
#define QTAWS_CREATEPROFILEJOBRESPONSE_H

#include "databrewresponse.h"
#include "createprofilejobrequest.h"

namespace QtAws {
namespace DataBrew {

class CreateProfileJobResponsePrivate;

class QTAWSDATABREW_EXPORT CreateProfileJobResponse : public DataBrewResponse {
    Q_OBJECT

public:
    CreateProfileJobResponse(const CreateProfileJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProfileJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProfileJobResponse)
    Q_DISABLE_COPY(CreateProfileJobResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
